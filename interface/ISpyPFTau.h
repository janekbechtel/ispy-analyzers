#ifndef ANALYZER_ISPY_PFTAU_H
#define ANALYZER_ISPY_PFTAU_H

#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "DataFormats/TauReco/interface/PFTau.h"
#include "DataFormats/TauReco/interface/PFTauDiscriminator.h"
#include "DataFormats/TauReco/interface/PFTauDiscriminatorByIsolation.h"

class ISpyPFTau : public edm::EDAnalyzer
{
public:
    explicit ISpyPFTau(const edm::ParameterSet&);
    virtual ~ISpyPFTau(void){}
    virtual void analyze(const edm::Event&, const edm::EventSetup&);
private:
    edm::InputTag inputTag_;
};
#endif // ANALYZER_ISPY_PFTAU_H
