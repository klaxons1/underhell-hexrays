void __thiscall sub_1001A5A0(const void **this, int a2)
{
  const void *v3; // eax
  char *v4; // ecx
  signed int v5; // eax

  this[3] = 0;
  if ( a2 )
  {
    v3 = this[1];
    if ( a2 > (int)v3 )
      sub_1001A460(this, a2 - (_DWORD)v3);
    this[3] = (char *)this[3] + a2;
    v4 = (char *)*this;
    v5 = (signed int)this[3] - a2;
    this[4] = *this;
    if ( v5 > 0 && a2 > 0 )
      memcpy(&v4[a2], v4, v5);
  }
}
