void __thiscall sub_102F7D10(_BYTE *this)
{
  _BYTE v2[64]; // [esp+4h] [ebp-44h] BYREF
  int v3; // [esp+44h] [ebp-4h] BYREF

  if ( !this[5710] && sub_102F6C40((int)this, 0) && sub_102F3E40(this) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, const char *, _DWORD, _DWORD, _BYTE *, int))(*(_DWORD *)this + 2344))(
           this,
           "TLK_FLASHLIGHT_ILLUM",
           0,
           0,
           v2,
           64) )
    {
      *((_DWORD *)this + 1431) = *sub_10162BE0(&v3, v2);
      sub_100B8E30(this + 2760);
      this[5710] = 1;
      *((float *)this + 1428) = *(float *)(dword_106B31C8 + 12) + 0.1;
    }
  }
}
