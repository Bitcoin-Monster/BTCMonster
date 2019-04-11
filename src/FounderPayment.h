/*
 * Copyright (c) 2018 The resq Core developers
 * Copyright (c) 2019 The Bitcoin Monster Core developers
 * Distributed under the MIT software license, see the accompanying
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.
 *
 * FounderPayment.h
 *
 *  Created on: Jun 24, 2018
 *      Author: Tri Nguyen
 */

#ifndef SRC_FOUNDERPAYMENT_H_
#define SRC_FOUNDERPAYMENT_H_
#include <string>
#include "amount.h"
#include "primitives/transaction.h"
#include "base58.h"
using namespace std;

static const char* DEFAULT_FOUNDER_ADDRESS = "MGUxgXX7rmsKL5tH1PK6BU1ep1g9My4LFz";

class FounderPayment {
public:
	FounderPayment(const char* address = DEFAULT_FOUNDER_ADDRESS) {
		founderAddress.SetString(address);
	}
	~FounderPayment(){};
	CAmount getFounderPaymentAmount(int blockHeight, CAmount blockReward);
	void FillFounderPayment(CMutableTransaction& txNew, int nBlockHeight, CAmount blockReward, CTxOut& txoutFounderRet);
	bool IsBlockPayeeValid(const CTransaction& txNew, const int height, const CAmount blockReward);
private:
	CBitcoinAddress founderAddress;
};



#endif /* SRC_FOUNDERPAYMENT_H_ */
