int __thiscall sub_10079390(int this, float *a2)
{
  int result; // eax
  int v5; // edi
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st7
  double v12; // st2
  double v13; // st3
  double v14; // st7
  double v15; // st7
  float v16; // [esp+Ch] [ebp-20h]
  float v17; // [esp+Ch] [ebp-20h]
  float v18; // [esp+10h] [ebp-1Ch]
  float v19; // [esp+1Ch] [ebp-10h] BYREF
  float v20; // [esp+20h] [ebp-Ch]
  float v21; // [esp+24h] [ebp-8h]
  float v22; // [esp+28h] [ebp-4h]
  float v23; // [esp+34h] [ebp+8h]

  result = (*(int (__stdcall **)(float *, _DWORD))(**(_DWORD **)(this + 4) + 1740))(a2, *(float *)(this + 16));
  if ( !(_BYTE)result )
  {
    v22 = sub_10265030(a2 + 3);
    v5 = *(_DWORD *)(*(_DWORD *)(this + 4) + 908);
    v6 = sub_100BE070(v5);
    v23 = v6;
    if ( 99999.0 == v6 )
      v23 = 0.0;
    if ( (unsigned __int8)sub_100BE950(v5, *(_DWORD *)(*(_DWORD *)(this + 4) + 2188)) )
    {
      v7 = ((double (__thiscall *)(int, float *))*(_DWORD *)(*(_DWORD *)this + 72))(this, &v19);
      v8 = v19 * v7;
      v9 = v20 * v7;
      v10 = v21 * v7;
      v11 = 1.0 - v7;
      v12 = a2[6] * v11;
      v13 = a2[7] * v11;
      v14 = v11 * a2[8] + v10;
      v19 = v8 + v12;
      v20 = v9 + v13;
      v21 = v14;
      off_10689714();
      v17 = (double)(unsigned __int16)(int)(sub_10265030(&v19) * 182.04445) * 0.0054931641;
      sub_10078210((float *)this, v17, -1.0);
      v15 = v22;
      sub_10424C10(v22, *(float *)(*(_DWORD *)(this + 4) + 732));
      v18 = v15;
      return sub_10078FF0((_DWORD *)this, *(_DWORD *)(*(_DWORD *)(this + 4) + 2188), v18);
    }
    else
    {
      v16 = (double)(unsigned __int16)(int)((v22 - v23) * 182.04445) * 0.0054931641;
      return sub_10078210((float *)this, v16, -1.0);
    }
  }
  return result;
}
