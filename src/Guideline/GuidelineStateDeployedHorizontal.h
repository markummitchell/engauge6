/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_DEPLOYED_HORIZONTAL_H
#define GUIDELINE_STATE_DEPLOYED_HORIZONTAL_H

#include "GuidelineStateDeployedAbstract.h"

/// Implements guideline behavior for GUIDELINE_STATE_DEPLOYED_HORIZONTAL
class GuidelineStateDeployedHorizontal : public GuidelineStateDeployedAbstract
{
public:
  /// Single constructor.
  GuidelineStateDeployedHorizontal(GuidelineStateContext &context);
  virtual ~GuidelineStateDeployedHorizontal();

  virtual void handleMousePress (const QPointF &posScene);
  virtual QLineF lineFromPoint (const QPointF &point) const;
  virtual QString state () const;

private:
  GuidelineStateDeployedHorizontal();

};

#endif // GUIDELINE_STATE_DEPLOYED_HORIZONTAL_H
