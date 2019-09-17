/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_DEPLOYED_HORIZONTAL_HIDE_H
#define GUIDELINE_STATE_DEPLOYED_HORIZONTAL_HIDE_H

#include "GuidelineStateDeployedHorizontalAbstract.h"

/// Implements guideline behavior for GUIDELINE_STATE_DEPLOYED_HORIZONTAL
class GuidelineStateDeployedHorizontalHide : public GuidelineStateDeployedHorizontalAbstract
{
public:
  /// Single constructor.
  GuidelineStateDeployedHorizontalHide(GuidelineStateContext &context);
  virtual ~GuidelineStateDeployedHorizontalHide();

  virtual void begin ();
  virtual bool doPaint () const;
  virtual void end ();
  virtual void handleHoverEnterEvent ();
  virtual void handleHoverLeaveEvent ();
  virtual void handleMousePress (const QPointF &posScene);
  virtual void handleShowHide (bool show);
  virtual QString state () const;

private:
  GuidelineStateDeployedHorizontalHide();

};

#endif // GUIDELINE_STATE_DEPLOYED_HORIZONTAL_HIDE_H
