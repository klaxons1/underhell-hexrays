void __thiscall sub_1017C850(unsigned int this, char a2, unsigned int a3, int a4)
{
  double v4; // st7
  int v6; // edi
  unsigned int v7; // eax
  int *v8; // ecx
  float v9; // [esp+0h] [ebp-18h]
  float v10; // [esp+10h] [ebp-8h]

  v4 = 0.0;
  if ( *(_BYTE *)(this + 800) != a2 )
  {
    v6 = 0;
    for ( *(_BYTE *)(this + 800) = a2; v6 < *(_DWORD *)(this + 816); ++v6 )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(this + 804) + 4 * v6);
      if ( v7 != -1 )
      {
        v8 = &off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 804) + 4 * v6) & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 804) + 4 * v6) & 0xFFF) + 2] == v7 >> 12 )
        {
          if ( *v8 )
          {
            v9 = v4;
            sub_1010C7F0((float *)dword_10614CA8, *v8, "_OnLogicBranchChanged", v9, this, this, 0);
            v4 = 0.0;
          }
        }
      }
    }
  }
  if ( !a4 )
  {
    v10 = v4;
    if ( *(_BYTE *)(this + 800) )
      sub_1010DD80((_DWORD *)(this + 824), __SPAIR64__(this, a3), v10);
    else
      sub_1010DD80((_DWORD *)(this + 848), __SPAIR64__(this, a3), v10);
  }
}
