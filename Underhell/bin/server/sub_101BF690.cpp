int __thiscall sub_101BF690(int this, int a2)
{
  int *v3; // esi
  int v4; // edi
  unsigned int v5; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  if ( !*(_BYTE *)(this + 225) )
    return 0;
  if ( *(_BYTE *)(this + 2160) )
  {
    if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2176) > 0.1 && (*(_DWORD *)(a2 + 64) & 0x2000004A) != 0 )
    {
      v9 = sub_1001E870((_DWORD *)a2);
      sub_101BE5D0((char *)this, v9);
    }
    return 0;
  }
  v3 = (int *)(this + 220);
  v4 = *(_DWORD *)(this + 220) - (int)*(float *)(a2 + 52);
  if ( *(_DWORD *)(this + 220) != v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *v3 = v4;
  }
  if ( *v3 >= 0 )
  {
    v7 = *(_DWORD *)(a2 + 64);
    if ( (v7 & 0x40) != 0
      || (v7 & 0x85) != 0
      && (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 100) < 50 )
    {
      v8 = sub_1001E870((_DWORD *)a2);
      sub_101BE8E0(this, a2, v8, (int)&flt_106B4F40);
    }
    return 1;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 44);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v5 >> 12 )
    {
      sub_101BE5D0((char *)this, 0);
      return 1;
    }
    else
    {
      sub_101BE5D0((char *)this, off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1]);
      return 1;
    }
  }
}
