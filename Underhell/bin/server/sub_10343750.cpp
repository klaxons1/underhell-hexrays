int __thiscall sub_10343750(int this, int a2, char *a3)
{
  _DWORD *v5; // eax
  float *v6; // eax
  double v7; // st6
  double v8; // st7
  int result; // eax
  _DWORD *v10; // eax
  float *v11; // eax
  double v12; // st7
  _DWORD *v13; // eax
  bool v14; // zf
  _DWORD v15[3]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD v16[3]; // [esp+18h] [ebp-Ch] BYREF
  int savedregs; // [esp+24h] [ebp+0h] BYREF
  float v18; // [esp+30h] [ebp+Ch]
  int v19; // [esp+30h] [ebp+Ch]
  int v20; // [esp+30h] [ebp+Ch]

  v5 = (_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 576))(a3);
  *(_DWORD *)a2 = *v5;
  *(_DWORD *)(a2 + 4) = v5[1];
  *(_DWORD *)(a2 + 8) = v5[2];
  v18 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3688);
  if ( a3[256] >= 0 )
  {
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 220))(a3) == 12 )
    {
      if ( (*((_DWORD *)a3 + 63) & 0x800) != 0 )
        sub_100DAE60((int)a3);
      result = a2;
      *(float *)a2 = *((float *)a3 + 145);
      *(float *)(a2 + 4) = *((float *)a3 + 146);
      *(float *)(a2 + 8) = *((float *)a3 + 147) + 4.0;
    }
    else if ( (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 220))(a3) == 19 )
    {
      if ( v18 > 0.0 && v18 < 4.0 && *(_DWORD *)(dword_10698344 + 48) )
      {
        v19 = *(_DWORD *)a3;
        v10 = sub_103434D0((_DWORD *)this, v16);
        v11 = (float *)(*(int (__thiscall **)(char *, _DWORD *, _DWORD *, _DWORD))(v19 + 520))(a3, v15, v10, 0);
      }
      else
      {
        v20 = *(_DWORD *)a3;
        v13 = sub_103434D0((_DWORD *)this, v15);
        v11 = (float *)(*(int (__thiscall **)(char *, _DWORD *, _DWORD *))(v20 + 524))(a3, v16, v13);
      }
      *(float *)a2 = *v11;
      *(float *)(a2 + 4) = v11[1];
      v12 = v11[2];
      result = a2;
      *(float *)(a2 + 8) = v12;
    }
    else if ( (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 220))(a3) == 4 )
    {
      if ( (*((_DWORD *)a3 + 63) & 0x800) != 0 )
        sub_100DAE60((int)a3);
      result = a2;
      *(float *)a2 = *((float *)a3 + 145);
      *(float *)(a2 + 4) = *((float *)a3 + 146);
      *(float *)(a2 + 8) = *((float *)a3 + 147) + 18.0;
    }
    else
    {
      v14 = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 220))(a3) == 23;
      result = a2;
      if ( !v14 )
        *(float *)(a2 + 8) = *(float *)(a2 + 8) + 8.0;
    }
  }
  else
  {
    if ( !sub_100DA7A0(this, (int)&savedregs, (int)a3, a2, (float *)a2, 16449, 0) )
    {
      v6 = (float *)(*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)a3 + 504))(a3, v16);
      v7 = v6[1];
      v8 = v6[2] + 1.0;
      *(float *)a2 = *v6;
      *(float *)(a2 + 4) = v7;
      *(float *)(a2 + 8) = v8;
    }
    return a2;
  }
  return result;
}
