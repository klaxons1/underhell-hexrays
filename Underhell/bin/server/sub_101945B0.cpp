int __thiscall sub_101945B0(int this, _DWORD *a2)
{
  int result; // eax
  double v4; // st7
  float *v5; // ecx
  float v6; // [esp+4h] [ebp-Ch]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  result = sub_1025FC50();
  if ( result )
  {
    result = *(_DWORD *)(this + 1124);
    if ( result != 1 && !*(_BYTE *)(this + 1168) && result != 4 )
    {
      sub_10192560(this, (int)&savedregs);
      v4 = 0.0;
      if ( *(_DWORD *)(this + 1092) )
      {
        if ( *a2 == 2 )
          v4 = atof((const char *)a2[259]);
        v5 = *(float **)(this + 1088);
        v6 = v4;
        if ( v5 )
          sub_1018DD90(v5, *(_DWORD *)(this + 1100), v6);
        else
          sub_1018DD90(*(float **)(this + 1092), 4, v6);
        return sub_1023C380((int)"EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
      }
      else
      {
        return sub_1023C380((int)"EDIT_MOVE_CORNER.NoMarkedArea", 0.0, 0);
      }
    }
  }
  return result;
}
