/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_DEPLOYED_VERTICAL_H
#define GUIDELINE_STATE_DEPLOYED_VERTICAL_H

#include "GuidelineStateAbstractBase.h"

/// Implements guideline behavior for GUIDELINE_STATE_DEPLOYED_VERTICAL
class GuidelineStateDeployedVertical : public GuidelineStateAbstractBase
{
public:
  /// Single constructor.
  GuidelineStateDeployedVertical(GuidelineStateContext &context);
  virtual ~GuidelineStateDeployedVertical();

  virtual bool alwaysVisible () const;
  virtual void begin();
  virtual GuidelineState cloneState () const;
  virtual void end();
  virtual bool initialHoverEventsEnable () const;
  virtual bool isTemplate () const;
  virtual QLineF templateHomeLine () const;

private:
  GuidelineStateDeployedVertical();

};

#endif // GUIDELINE_STATE_DEPLOYED_VERTICAL_H
