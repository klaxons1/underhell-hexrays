void __thiscall sub_1025B8C0(int this)
{
  int v2; // [esp+4h] [ebp-8h] BYREF
  int v3; // [esp+8h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 352) )
  {
    sub_1024A6C0(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 240))(this) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 204))(this) )
      {
        if ( (*(_BYTE *)(this + 293) & 1) != 0 )
        {
          sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v3, (int)&v2);
          (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)this + 1040))(this, 3, 3, v3 - 4, v2 - 2);
        }
      }
    }
  }
}
