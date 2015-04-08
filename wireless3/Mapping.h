//====================================================================
//Mapping.h: Interface of the Mapping class.
//
//----Author: baobao7766
//----Time:   2015/03/05
//====================================================================

#ifndef _MAPPING_H_
#define _MAPPING_H_

#include <string>
#include <itpp/itcomm.h>

class SymbolMap{
public:
	SymbolMap();
	SymbolMap(int a, int b):c(8), precision(8){
		// ���벿������precisionȡ8Ϊ��׼��
		c = a;
		precision = b;
	};
	virtual ~SymbolMap();

	uint8_t map_func(uint16_t value);
/* 
	������Ϊʹ�� hash ��������õ�����Ԫ�Ǿ��ȷֲ���
	���ԣ����������źŵĹ���ʱ��ʹ����ɢ���ȷֲ��Ķ������ľ�
	��Ϊ�źŵ�ƽ�����ʣ�P = (N - 1)*(N + 1) / 12.0
*/
	double get_signal_average_power();

private:
	int c;
	int precision;
};
#endif