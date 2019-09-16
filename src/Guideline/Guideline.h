/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_H
#define GUIDELINE_H

#include "GuidelineStateContext.h"
#include <QGraphicsLineItem>

class QMouseEvent;
class QPainter;
class QGraphicsScene;
class QStyleOptionGraphicsItem;
class QWidget;

/// This class is a special case of the standard QGraphicsLineItem for guidelines,
/// and serves as the base class for the guideline state classes. This class has
/// a state machine to handle the different states
///
/// Selected Guideline is made invisible since a cloned Guideline replaces the
/// selected Guideline.
class Guideline : public QObject, public QGraphicsLineItem
{
  Q_OBJECT;

public:
  /// Single constructor.
  Guideline(QGraphicsScene &scene,
            Guidelines &guidelines,
            GuidelineState guidelineStateInitial);
  ~Guideline();

  /// Bind a newly-created visible Guideline to this Guideline, and make this one invisible
  void bindGuidelineVisible (Guideline *guidelineVisible);

  /// Show/hide the Guideline objects
  void handleShowHide (bool show);

  /// Highlight this Guideline upon hover enter
  virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);

  /// Unset highlighting triggered by hover enter
  virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

  /// Line width. This is used to push templates just inside the scene borders
  double lineWidthTemplate() const;

  /// Forwad movements to visible Guideline
  virtual void mouseMoveEvent (QGraphicsSceneMouseEvent *event);

  /// Forward press event to state machine
  virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);

  /// Cleanup after being dragged
  virtual void mouseReleaseEvent (QGraphicsSceneMouseEvent *event);

  /// Override painting so this disappears when selected. Selected Guidelines are never visible
  virtual void paint(QPainter *painter,
                     const QStyleOptionGraphicsItem *option,
                     QWidget *widget = Q_NULLPTR);

  /// Set pen color and line width
  void setPenColor (Qt::GlobalColor color);

  /// Update the geometry so it passes through the specified point
  void updateGeometry (const QPointF &pos);

signals:

  /// Signal for cloned deployed Guideline from handle Guideline
  void signalHandleMoved (QPointF);

public slots:

  /// Slot for signal from cloned deployed Guideline from handle Guideline
  void slotHandleMoved (QPointF);

private:
  Guideline();

  // Forces use of setPenColor instead of QGraphicsLineItem::setPen
  using QGraphicsLineItem::setPen;

  // Context is allocated as a final step in the constructor, at which point
  // this class has registered with the QGraphicsScene
  GuidelineStateContext *m_context;

  // After binding to visible Guideline
  Guideline *m_guidelineVisible;

};

#endif // GUIDELINE_H
