int __thiscall sub_10195300(int this)
{
  int result; // eax
  int v3; // edx
  int *v4; // edi
  int *v5; // [esp+10h] [ebp-4h] BYREF

  result = sub_1025FC50();
  if ( result )
  {
    v3 = *(_DWORD *)(this + 1124);
    if ( v3 != 1 && !*(_BYTE *)(this + 1168) && v3 != 4 )
    {
      v4 = *(int **)(this + 1088);
      v5 = v4;
      if ( v4 )
      {
        sub_1023C380((int)"EDIT_DELETE", 0.0, 0);
        sub_10194AB0(&dword_10632624, &v5);
        sub_10190B20(v4);
        sub_10184660((int)v4);
      }
      result = sub_1019EAB0(this);
      *(_DWORD *)(this + 1180) = 0;
      *(_DWORD *)(this + 1088) = 0;
      *(_DWORD *)(this + 1100) = 4;
    }
  }
  return result;
}
