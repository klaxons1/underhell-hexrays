void __thiscall sub_1024C420(void *this)
{
  int *v2; // eax
  int v3; // edi
  int *v4; // ecx
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( !*((_DWORD *)this + 213) )
  {
    v2 = sub_10162BE0(&v5, "sprites/physbeam.vmt");
    v3 = *v2;
    if ( *((_DWORD *)this + 213) != *v2 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v4 = (int *)*((_DWORD *)this + 6);
        if ( v4 )
          sub_100194B0(v4, 852);
      }
      *((_DWORD *)this + 213) = v3;
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
  nullsub_4();
}
