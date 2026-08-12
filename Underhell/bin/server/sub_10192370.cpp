int __thiscall sub_10192370(int this)
{
  int result; // eax
  _DWORD *v3; // edi
  float *v4; // eax
  float *v5; // esi
  double v6; // st7
  double v7; // st6
  float v8; // [esp+10h] [ebp-Ch] BYREF
  float v9; // [esp+14h] [ebp-8h]
  float v10; // [esp+18h] [ebp-4h]

  result = sub_1025FC50();
  v3 = (_DWORD *)result;
  if ( result )
  {
    result = *(_DWORD *)(this + 1124);
    if ( result != 1 && !*(_BYTE *)(this + 1168) && result != 4 )
    {
      if ( *(_DWORD *)(this + 1088) )
      {
        if ( ((unsigned __int8)sub_102B4350(v3) || (v3[854] & 8) != 0)
          && (*(int (__thiscall **)(_DWORD *))(*v3 + 1332))(v3) == 6 )
        {
          v4 = *(float **)(this + 1088);
          v8 = v4[7];
          v9 = v4[8];
          v10 = v4[9] + 54.0;
          return sub_1025F370(v3, &v8, 0);
        }
      }
      else
      {
        v5 = *(float **)(this + 1180);
        if ( v5
          && ((unsigned __int8)sub_102B4350(v3) || (v3[854] & 8) != 0)
          && (*(int (__thiscall **)(_DWORD *))(*v3 + 1332))(v3) == 6 )
        {
          v6 = *v5 + v5[3];
          v7 = (v5[4] + v5[1]) * 0.5;
          v10 = (v5[5] + v5[2]) * 0.5;
          v8 = v6 * 0.5 + v5[14] * 25.0;
          v9 = 25.0 * v5[15] + v7;
          return sub_1025F370(v3, &v8, 0);
        }
      }
      return sub_1023C380((int)"EDIT_WARP_TO_MARK", 0.0, 0);
    }
  }
  return result;
}
