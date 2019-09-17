/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#include "Guideline.h"
#include "GuidelineFormat.h"
#include "GuidelineStateContext.h"
#include "GuidelineStateTemplateVerticalLeftLurking.h"
#include "Logger.h"

GuidelineStateTemplateVerticalLeftLurking::GuidelineStateTemplateVerticalLeftLurking (GuidelineStateContext &context) :
  GuidelineStateTemplateVerticalLeftAbstract (context)
{
}

GuidelineStateTemplateVerticalLeftLurking::~GuidelineStateTemplateVerticalLeftLurking ()
{
}

void GuidelineStateTemplateVerticalLeftLurking::begin ()
{
  LOG4CPP_INFO_S ((*mainCat)) << "GuidelineStateTemplateVerticalLeftLurking::begin";

  GuidelineStateTemplateAbstract::beginCommon (templateHomeLine(sceneRect ()));

  context().guideline().setVisible (true); // Undo setVisible(false) from Hide class

  GuidelineFormat guidelineFormat;
  context().guideline().setPenColor (guidelineFormat.colorHidden (),
                                     guidelineFormat.lineWidthHover ()); // Hide until hover entry
}

bool GuidelineStateTemplateVerticalLeftLurking::doPaint () const
{
  return true;
}

void GuidelineStateTemplateVerticalLeftLurking::end ()
{
  LOG4CPP_INFO_S ((*mainCat)) << "GuidelineStateTemplateVerticalLeftLurking::end";
}

void GuidelineStateTemplateVerticalLeftLurking::handleHoverEnterEvent ()
{
  context().requestStateTransition(GUIDELINE_STATE_TEMPLATE_VERTICAL_LEFT_HOVER);
}

void GuidelineStateTemplateVerticalLeftLurking::handleHoverLeaveEvent ()
{
   // This event would have been handled by GUIDELINE_STATE_TEMPLATE_VERTICAL_LEFT_HOVER
}

void GuidelineStateTemplateVerticalLeftLurking::handleMousePress (const QPointF &posScene)
{
  LOG4CPP_DEBUG_S ((*mainCat)) << "GuidelineStateTemplateVerticalLeftLurking::handleMousePress";

  handleMousePressCommon (posScene,
                          GUIDELINE_STATE_DEPLOYED_VERTICAL_NORMAL,
                          GUIDELINE_STATE_TEMPLATE_VERTICAL_LEFT_LURKING);
}

void GuidelineStateTemplateVerticalLeftLurking::handleShowHide (bool show)
{
  if (!show) {
    context().requestStateTransition(GUIDELINE_STATE_TEMPLATE_VERTICAL_LEFT_HIDE);
  }
}

QString GuidelineStateTemplateVerticalLeftLurking::state () const
{
  return ("GuidelineStateTemplateVerticalLeftLurking");
}
