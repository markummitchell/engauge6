/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_TEMPLATE_HORIZONTAL_H
#define GUIDELINE_STATE_TEMPLATE_HORIZONTAL_H

#include "GuidelineStateAbstractBase.h"

/// Implements guideline behavior for GUIDELINE_STATE_TEMPLATE_HORIZONTAL
class GuidelineStateTemplateHorizontal : public GuidelineStateAbstractBase
{
public:
  /// Single constructor.
  GuidelineStateTemplateHorizontal(GuidelineStateContext &context);
  virtual ~GuidelineStateTemplateHorizontal();

  virtual void begin ();
  virtual void end ();
  
private:
  GuidelineStateTemplateHorizontal();

};

#endif // GUIDELINE_STATE_TEMPLATE_HORIZONTAL_H
