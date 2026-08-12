void __thiscall sub_10367300(int this, _DWORD *a2)
{
  if ( *a2 == 74 )
  {
    if ( (*(_BYTE *)(this + 256) & 1) != 0 || !*(_DWORD *)(this + 196) )
    {
      sub_10027CD0((_DWORD *)this, 0);
      *(float *)(this + 4000) = *(float *)(dword_106B31C8 + 12) + 0.5;
    }
  }
  else if ( (unsigned int)(*a2 - 252) > 1 )
  {
    sub_1032CFB0((int *)this, a2);
  }
  else if ( (*(_BYTE *)(this + 256) & 1) != 0 )
  {
    sub_10027CD0((_DWORD *)this, 0);
  }
}
