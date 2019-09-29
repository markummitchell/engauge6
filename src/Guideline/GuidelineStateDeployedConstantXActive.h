/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_DEPLOYED_CONSTANT_X_ACTIVE_H
#define GUIDELINE_STATE_DEPLOYED_CONSTANT_X_ACTIVE_H

#include "GuidelineStateDeployedConstantXAbstract.h"

/// Implements guideline behavior for GUIDELINE_STATE_DEPLOYED_CONSTANT_X_ACTIVE
class GuidelineStateDeployedConstantXActive : public GuidelineStateDeployedConstantXAbstract
{
public:
  /// Single constructor.
  GuidelineStateDeployedConstantXActive(GuidelineStateContext &context);
  virtual ~GuidelineStateDeployedConstantXActive();

  virtual void begin ();
  virtual bool doPaint () const;
  virtual void end ();
  virtual void handleHoverEnterEvent ();
  virtual void handleHoverLeaveEvent ();
  virtual void handleMousePress (const QPointF &posScene);
  virtual void handleShowHide (bool show);
  virtual QString state () const;

private:
  GuidelineStateDeployedConstantXActive();

};

#endif // GUIDELINE_STATE_DEPLOYED_CONSTANT_X_ACTIVE_H
