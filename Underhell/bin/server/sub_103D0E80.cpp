int __thiscall sub_103D0E80(int *this)
{
  bool v2; // zf
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  float v7; // [esp+0h] [ebp-Ch]

  (*(void (__thiscall **)(int *))(*this + 100))(this);
  v2 = (this[62] & 1) == 0;
  this[200] = this[183];
  this[203] = this[182];
  if ( !v2 )
  {
    v7 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC4A0(this, v7, 0);
  }
  v3 = this[75];
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (this[75] & 0xFFF) + 1], v5 = v3 >> 12, off_1061BE18[4 * (this[75] & 0xFFF) + 2] == v5)
    && *v4
    && off_1061BE18[4 * (this[75] & 0xFFF) + 2] == v5 )
  {
    return sub_102608F0(this + 219, (_DWORD *)*v4, 0);
  }
  else
  {
    return sub_102608F0(this + 219, 0, 0);
  }
}
