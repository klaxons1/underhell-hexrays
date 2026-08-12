void __thiscall sub_1039FCC0(_DWORD *this)
{
  char v2; // [esp+7h] [ebp-1h] BYREF

  if ( !*((_BYTE *)this + 3826)
    && *((_BYTE *)this + 3800)
    && *((float *)this + 946) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/roller.mdl");
    sub_1039FC20((int)this);
    this[49] = 0;
    v2 = 0;
    sub_1039FB80((_BYTE *)this + 3800, &v2);
    this[948] = 0;
  }
}
