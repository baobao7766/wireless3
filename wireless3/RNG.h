//====================================================================
//RNG.h: Interface of the RNG class.
//
//----Author: baobao7766
//----Time:   2015/03/02
//====================================================================

#ifndef _RNG_H_
#define _RNG_H_

#include <vector>
#include <itpp/itcomm.h>

class RNG{
public:
	RNG();
	RNG(uint32_t spine_value);
	virtual ~RNG();

	uint16_t next();

private:
	int i;						// ���� hash �����еĳ�ֵ
	uint32_t seed;					// ���� spine_value�� ��ΪRNG����
	std::vector<uint16_t> next_values ;	// ��Ӧÿ�� seed ����λ�Ĵ���

	//���� next()���� hash ������������� rng_output.
	void produce_more_values();
};
#endif