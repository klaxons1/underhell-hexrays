void __thiscall sub_103AB9D0(int *this)
{
  float v2; // [esp+4h] [ebp-Ch]

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 264))(this) )
  {
    sub_10036B00(this);
    sub_103AB3E0((int)this);
  }
  else
  {
    (*(void (__thiscall **)(int *, int))(*this + 1416))(this, dword_106EAA8C);
    (*(void (__thiscall **)(int *))(*this + 728))(this);
    v2 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0(this, v2, 0);
  }
}
