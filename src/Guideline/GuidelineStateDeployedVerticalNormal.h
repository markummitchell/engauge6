/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_DEPLOYED_VERTICAL_NORMAL_H
#define GUIDELINE_STATE_DEPLOYED_VERTICAL_NORMAL_H

#include "GuidelineStateDeployedVerticalAbstract.h"

/// Implements guideline behavior for GUIDELINE_STATE_DEPLOYED_VERTICAL
class GuidelineStateDeployedVerticalNormal : public GuidelineStateDeployedVerticalAbstract
{
public:
  /// Single constructor.
  GuidelineStateDeployedVerticalNormal(GuidelineStateContext &context);
  virtual ~GuidelineStateDeployedVerticalNormal();

  virtual void begin ();
  virtual bool doPaint () const;
  virtual void end ();
  virtual void handleHoverEnterEvent ();
  virtual void handleHoverLeaveEvent ();
  virtual void handleMousePress (const QPointF &posScene);
  virtual void handleShowHide (bool show);
  virtual QString state () const;

private:
  GuidelineStateDeployedVerticalNormal();

};

#endif // GUIDELINE_STATE_DEPLOYED_VERTICAL_NORMAL_H
