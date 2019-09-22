/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#include "EngaugeAssert.h"
#include "GuidelineLine.h"
#include "GuidelineProjectorConstantY.h"
#include "GuidelineStateContext.h"
#include "GuidelineStateDeployedConstantYAbstract.h"
#include "Logger.h"
#include <QGraphicsScene>
#include "Transformation.h"

GuidelineStateDeployedConstantYAbstract::GuidelineStateDeployedConstantYAbstract (GuidelineStateContext &context) :
  GuidelineStateDeployedAbstract (context)
{
}

GuidelineStateDeployedConstantYAbstract::~GuidelineStateDeployedConstantYAbstract ()
{
}

EllipseParameters GuidelineStateDeployedConstantYAbstract::pointToEllipse (const QPointF & /* posScreen */) const
{
  return EllipseParameters();
}

QLineF GuidelineStateDeployedConstantYAbstract::pointToLine (const QPointF &posScreen) const
{
  GuidelineProjectorConstantY projector;

  return projector.fromPosScreen (context().transformation(),
                                  sceneRect (),
                                  posScreen);
}

void GuidelineStateDeployedConstantYAbstract::setPointGraph (const QPointF &posGraph)
{
  // Second coordinate is what defines this Guideline
  setPointCoordinate (posGraph.y ());
}

void GuidelineStateDeployedConstantYAbstract::updateWithLatestTransformation ()
{
  LOG4CPP_INFO_S ((*mainCat)) << "GuidelineStateDeployedConstantYAbstract::updateWithLatestTransformation";

  GuidelineProjectorConstantY projector;

  GuidelineLine *line = dynamic_cast<GuidelineLine*> (&context().guideline());
  line->setLine (projector.fromCoordinateY (context().transformation(),
                                            sceneRect (),
                                            coordinate ()));
}
