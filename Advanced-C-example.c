/* Advanced array in C */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;
typedef char sint8;
typedef short sint16;
typedef int sint32;
typedef float float32;
typedef float real32;
typedef unsigned long uint16_least;
typedef _Bool boolean;

typedef enum
{
	LE,
	QUANG,
	PHUC,
	END1
} NameData_ten;
typedef struct
{
	NameData_ten xParaType_en;
	uint8 DayValue_u8;
	uint8 MonthValue_u8;
	uint8 YearValue_u8;
} random_dataInfo_tst;

typedef uint8 Datetype;
typedef uint16 Datetype_u16;
typedef struct
{
	Datetype Mreal;
	Datetype buffer;
}Mo_data_tst;
typedef struct
{
	Datetype_u16 Yreal;
	Datetype buffer;
}Ye_data_tst;
Ye_data_tst Year_data_aast[2u][2u];
typedef struct
{
	Mo_data_tst get_month_ast[2];
	uint8 noise;
	boolean status;
}month_Mar_tst;
const month_Mar_tst month_Mar_cast[1] =
{
	{
		{
			{
				3,
				0
			},
			{
				0,
				0
			}
		},
		30,
		(1 != 0)
	}
	
};
typedef struct
{
	uint16 Ryear;
	uint8 Buf;
	boolean status;
}year_buf_t;
static year_buf_t xYearVal;
typedef struct
{
	year_buf_t *ptr_year_pst;
}year_PtrStruct_t;
year_PtrStruct_t year_ptrStruct_apst[(1L)] =
{
	&xYearVal
};
typedef enum
{
	Firstname,
	Middlename,
	Lastname,
	END
} nameDirection_ten;
typedef struct
{
	uint8 _day;
	uint8 _month;
	uint16 _year;
	uint8 _fName;
	uint8 _mName;
	uint8 _lName;
	nameDirection_ten nameDirection_state_en;
}xout_DOB_tst;


xout_DOB_tst xDOB_value;
nameDirection_ten nameDirection_state_en;

const random_dataInfo_tst dataInfo_cast[3] =
{

	{
		LE,
		0,
		0,
		0
	},

	{
		QUANG,
		0,     //day
		1,
		0
	},

	{
		PHUC,
		1,
		0,
		0
	},
};
const random_dataInfo_tst * get_array(uint8 position_u8)
{

	return &(dataInfo_cast[position_u8]);
}
uint16 xdata_info_au16[3] =
{
	30,3,1997
};
uint16 get_year(uint8 position)
{
	return *(&xdata_info_au16[position]);
}
void AOOB_example()
{

	xout_DOB_tst *final_data_pst;
	const random_dataInfo_tst * ParaInfo_pctst;
	uint16 Dob_u16;
	uint16 Mob_u16;
	uint16 Yob_u16;
	uint8 DayValue_u8;
	uint8 idx = 0;
	final_data_pst = &xDOB_value;
	final_data_pst->nameDirection_state_en = 0;

	for (idx = 0;idx<1;idx++)
	{
		(year_ptrStruct_apst[idx].ptr_year_pst)->Ryear = 0;
		(year_ptrStruct_apst[idx].ptr_year_pst)->Buf = 0;
		Year_data_aast[idx][idx].Yreal = get_year((idx + 1) << 1);
	}

	ParaInfo_pctst = get_array(idx);
	DayValue_u8 = ParaInfo_pctst->DayValue_u8;

	do
	{

		switch (final_data_pst->nameDirection_state_en)
		{
		case Firstname:
			final_data_pst->_day = (uint8) xdata_info_au16[DayValue_u8];
			Dob_u16 = final_data_pst->_day;
			final_data_pst->nameDirection_state_en = Middlename;
			break;
		case Middlename:
			final_data_pst->_month = month_Mar_cast[dataInfo_cast[2].MonthValue_u8].get_month_ast[0].Mreal; 
			if (final_data_pst->_month == 3)
			{
				idx = 0;
				(year_ptrStruct_apst[idx].ptr_year_pst)->Ryear = Year_data_aast[idx][idx].Yreal;
				final_data_pst->nameDirection_state_en = Lastname;
			}
			else {
				//final_data_pst->nameDirection_state_en = END;
			}
			final_data_pst->nameDirection_state_en = Lastname;
			break;
		case  Lastname:

				final_data_pst->_year = (year_ptrStruct_apst[idx].ptr_year_pst)->Ryear;
				final_data_pst->nameDirection_state_en = END;
				break;
			default:
				break;
		}
	} while (final_data_pst->nameDirection_state_en != END);

	printf("%d - %02d - %d", final_data_pst->_day, final_data_pst->_month, final_data_pst->_year);

}
