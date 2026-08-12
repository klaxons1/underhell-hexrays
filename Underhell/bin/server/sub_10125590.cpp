float *__thiscall sub_10125590(float *this, float *a2, int *a3)
{
  int *v4; // esi
  float *result; // eax
  int v6; // edx
  int v7; // ecx
  double v8; // st7
  int v9; // edx
  float *v10; // eax
  double v11; // st7
  char v12[12]; // [esp+20h] [ebp-18h] BYREF
  float v13; // [esp+2Ch] [ebp-Ch]
  float v14; // [esp+30h] [ebp-8h]
  float v15; // [esp+34h] [ebp-4h]

  if ( ((_DWORD)this[62] & 4) == 0 )
    goto LABEL_5;
  v4 = a3;
  if ( a3 && (*(unsigned __int8 (__thiscall **)(int *))(*a3 + 320))(a3) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(*a3 + 320))(a3) )
    {
LABEL_5:
      result = a2;
      v6 = *((_DWORD *)this + 180);
      *a2 = this[179];
      v7 = *((_DWORD *)this + 181);
      *((_DWORD *)a2 + 1) = v6;
      *((_DWORD *)a2 + 2) = v7;
      return result;
    }
  }
  else
  {
    v4 = (int *)sub_10261B20();
  }
  if ( !v4 )
    goto LABEL_5;
  v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -10.0,
          10.0);
  v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -10.0,
          10.0);
  v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -10.0,
         10.0);
  v9 = *v4;
  v15 = v8;
  v10 = (float *)(*(int (__thiscall **)(int *, char *))(v9 + 504))(v4, v12);
  *a2 = v13 + *v10;
  a2[1] = v10[1] + v14;
  v11 = v10[2];
  result = a2;
  a2[2] = v11 + v15;
  return result;
}
