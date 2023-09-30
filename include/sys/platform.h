typedef 			int8_t _Int8t		;
typedef 			uint8_t _Uint8t		;
typedef 			int16_t _Int16t		;
typedef 			uint16_t _Uint16t	;
typedef 			int32_t _Int32t		;
typedef 			uint32_t _Uint32t	;
typedef 			int64_t _Int64t		;
typedef 			uint64_t _Uint64t	;
typedef 			uintptr_t _Uintptrt;

#if !defined(__FLEXARY)
#define __FLEXARY(__type, __name) __type __name[1]
#endif