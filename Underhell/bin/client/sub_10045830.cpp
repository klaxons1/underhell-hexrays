int __thiscall sub_10045830(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int result; // eax

  v2 = *(_DWORD *)(this + 324);
  if ( v2 != -1 )
  {
    v3 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4);
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( v4 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 496))(v4);
    }
  }
  result = *((_DWORD *)off_103DC81C + 6);
  if ( *(_DWORD *)(this + 192) != result )
  {
    *(_DWORD *)(this + 192) = result;
    if ( dword_10407394 == this )
    {
      if ( *(_BYTE *)(this + 4480) )
      {
        *(_BYTE *)(this + 4480) = 0;
        if ( (*(_BYTE *)(this + 732) & 0x20) != 0 )
        {
          *(_DWORD *)(this + 4520) = 0;
          *(float *)(this + 4508) = 0.0;
          *(_BYTE *)(this + 4524) = 0;
          *(float *)(this + 4512) = 0.0;
          *(float *)(this + 4516) = 0.0;
        }
        return (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)off_103ED0FC + 68))(
                 off_103ED0FC,
                 this,
                 this + 4484,
                 dword_10434620);
      }
    }
  }
  return result;
}
