float *__userpurge sub_1038DDB0@<eax>(int a1@<ecx>, int a2@<ebx>, float *a3, float *a4)
{
  float *result; // eax
  int v6; // eax
  int v7; // eax
  int (__thiscall *v8)(int, _BYTE *); // edx
  float *v9; // eax
  _BYTE v10[44]; // [esp+8h] [ebp-70h] BYREF
  float v11; // [esp+34h] [ebp-44h]
  _BYTE v12[12]; // [esp+5Ch] [ebp-1Ch] BYREF
  float v13[3]; // [esp+68h] [ebp-10h] BYREF
  void **v14; // [esp+74h] [ebp-4h] BYREF
  int savedregs; // [esp+78h] [ebp+0h] BYREF

  switch ( *(_DWORD *)(a1 + 4268) )
  {
    case 0:
      sub_1002E900((_BYTE *)a1, a2, a3, a4);
      return a3;
    case 1:
      goto LABEL_10;
    case 2:
      v7 = sub_10388C50((void *)a1);
      if ( sub_101119E0(v7 + 320, (float *)(a1 + 4208)) )
      {
        v8 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 968);
        v14 = &CTraceFilterWorldOnly::`vftable';
        v9 = (float *)v8(a1, v12);
        sub_10023120(COERCE_FLOAT(&savedregs), a1, v9, (float *)(a1 + 4208), 33570827, (int)&v14, (int)v10);
        if ( 1.0 == v11 )
          *(_DWORD *)(a1 + 4268) = 3;
      }
LABEL_10:
      sub_1038DBA0((float *)a1, a3, a4);
      return a3;
    case 3:
      if ( *(_DWORD *)(a1 + 4232) >= *(_DWORD *)(a1 + 4236) )
      {
        v13[0] = 0.5;
        v13[1] = 0.5;
        v13[2] = 1.0;
        v6 = sub_10388C50((void *)a1);
        sub_101117D0(v6 + 320, v13, (float *)(a1 + 4208));
        *(_DWORD *)(a1 + 4268) = 4;
LABEL_6:
        sub_103892A0((float *)a1, a3, a4);
        return a3;
      }
      else
      {
        sub_10389250((void *)a1, a3, a4);
        return a3;
      }
    case 4:
      goto LABEL_6;
    case 5:
      sub_1038A650((_DWORD *)a1, a2, a3, a4);
      return a3;
    default:
      result = a3;
      *a3 = flt_106F1CA8;
      a3[1] = flt_106F1CAC;
      a3[2] = flt_106F1CB0;
      return result;
  }
}
