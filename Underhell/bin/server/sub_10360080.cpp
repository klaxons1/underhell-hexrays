void __thiscall sub_10360080(int this)
{
  sub_10043CF0((int *)this);
  if ( *(_DWORD *)(this + 2380) == 1
    && *(_DWORD *)(this + 4184) != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 2] == *(_DWORD *)(this + 4184) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 1]
    && *(_BYTE *)(this + 4288) == 1 )
  {
    sub_10039F40((int *)this, dword_106E7C5C);
  }
}
