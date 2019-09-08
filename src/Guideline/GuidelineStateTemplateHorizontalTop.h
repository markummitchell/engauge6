/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_TEMPLATE_HORIZONTAL_TOP_H
#define GUIDELINE_STATE_TEMPLATE_HORIZONTAL_TOP_H

#include "GuidelineStateAbstractBase.h"

/// Implements guideline behavior for GUIDELINE_STATE_TEMPLATE_HORIZONTAL_TOP
class GuidelineStateTemplateHorizontalTop : public GuidelineStateAbstractBase
{
public:
  /// Single constructor.
  GuidelineStateTemplateHorizontalTop(GuidelineStateContext &context);
  virtual ~GuidelineStateTemplateHorizontalTop();

  virtual bool alwaysVisible () const;
  virtual void begin ();
  virtual GuidelineState cloneState () const;
  virtual void end ();
  virtual bool initialHoverEventsEnable () const;
  virtual bool isTemplate () const;
  virtual QLineF templateHomeLine () const;

private:
  GuidelineStateTemplateHorizontalTop();

};

#endif // GUIDELINE_STATE_TEMPLATE_HORIZONTAL_TOP_H
