void __thiscall std::exception::_Copy_str(std::exception *this, char *Source)
{
  size_t v3; // esi
  char *v4; // eax

  if ( Source )
  {
    v3 = strlen(Source) + 1;
    v4 = (char *)sub_10184390(v3);
    *((_DWORD *)this + 1) = v4;
    if ( v4 )
    {
      strcpy_s(v4, v3, Source);
      *((_BYTE *)this + 8) = 1;
    }
  }
}
