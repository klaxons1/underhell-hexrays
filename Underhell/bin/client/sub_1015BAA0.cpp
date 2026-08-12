void __thiscall sub_1015BAA0(_BYTE *this)
{
  int v2; // edi
  int (__thiscall *v3)(_BYTE *); // edx

  if ( !this[28] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC) )
    {
      v2 = sub_100422D0();
      if ( v2 )
      {
        v3 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 12);
        this[28] = 1;
        if ( v3(this) )
        {
          if ( dword_103E9144 > 0 || byte_103E913C )
            sub_1015BA80(this, v2);
        }
      }
    }
  }
}
