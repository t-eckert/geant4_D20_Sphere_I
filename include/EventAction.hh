#ifndef EventAction_h
#define EventAction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"

class RunAction;

/// Event action class

class EventAction : public G4UserEventAction
{
  public:
    EventAction(RunAction* runAction);
    virtual ~EventAction();

    virtual void BeginOfEventAction(const G4Event* event);
    virtual void EndOfEventAction(const G4Event* event);

    void Collect(G4double edep)
    { fEdep += edep; }

  private:
    RunAction* fRunAction;
    G4double   fEdep;
    G4int fNtag; 
};

#endif
