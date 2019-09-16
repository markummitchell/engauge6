/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_H
#define GUIDELINE_STATE_H

/// Set of possible guideline states. Terms are defined as:
/// # horizontal = Follows constant-y isocontour
/// # vertical = Follows constant-x isocontour
/// # template = One of the guidelines along every scene border that can be dragged
/// # deployed = One of the guidelines created by the user dragging a template guideline
/// # null = An invalid state. This enum is used as a return value, and the state is a noop
enum GuidelineState {
  GUIDELINE_STATE_DEPLOYED_HORIZONTAL_HIDE,
  GUIDELINE_STATE_DEPLOYED_HORIZONTAL_SHOW,  
  GUIDELINE_STATE_DEPLOYED_VERTICAL_HIDE,
  GUIDELINE_STATE_DEPLOYED_VERTICAL_SHOW,  
  GUIDELINE_STATE_HANDLE,  
  GUIDELINE_STATE_NULL,
  GUIDELINE_STATE_TEMPLATE_HORIZONTAL_BOTTOM_HIDE,
  GUIDELINE_STATE_TEMPLATE_HORIZONTAL_BOTTOM_SHOW,  
  GUIDELINE_STATE_TEMPLATE_HORIZONTAL_TOP_HIDE,
  GUIDELINE_STATE_TEMPLATE_HORIZONTAL_TOP_SHOW,
  GUIDELINE_STATE_TEMPLATE_VERTICAL_LEFT_HIDE,
  GUIDELINE_STATE_TEMPLATE_VERTICAL_LEFT_SHOW,
  GUIDELINE_STATE_TEMPLATE_VERTICAL_RIGHT_HIDE,
  GUIDELINE_STATE_TEMPLATE_VERTICAL_RIGHT_SHOW,
  NUM_GUIDELINE_STATES
};

#endif // GUIDELINE_STATE_H
