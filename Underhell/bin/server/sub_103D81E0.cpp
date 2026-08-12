int __thiscall sub_103D81E0(int *this)
{
  float v3; // [esp+4h] [ebp-Ch]

  (*(void (__thiscall **)(int *))(*this + 728))(this);
  (*(void (__thiscall **)(int *, int *))(*this + 784))(this, this);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(this, v3, 0);
  if ( this[282] )
    return sub_103D8120((int)this);
  else
    return sub_103D7A60(this);
}
