void __thiscall sub_101CB980(int this)
{
  int v2; // ebx
  _DWORD *v3; // esi
  char Buffer[256]; // [esp+28h] [ebp-110h] BYREF
  int v5[3]; // [esp+128h] [ebp-10h] BYREF
  float v6; // [esp+134h] [ebp-4h]

  if ( (*(_BYTE *)(this + 236) & 4) != 0 )
    sub_100C0570(this, 0.0, 0);
  if ( (*(_BYTE *)(this + 236) & 8) != 0 )
  {
    v2 = 0;
    if ( *(int *)(this + 1132) > 0 )
    {
      v3 = (_DWORD *)(this + 1156);
      do
      {
        if ( *v3 )
        {
          v6 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*v3 + 116))(*v3);
          (*(void (__thiscall **)(_DWORD, int *, _DWORD))(*(_DWORD *)*v3 + 188))(*v3, v5, 0);
          sub_1001E280(Buffer, "mass %.1f", v6);
          sub_1011BA70((int)v5, 0, (int)Buffer, 0.0, 0, 255, 0, 255);
        }
        ++v2;
        v3 += 6;
      }
      while ( v2 < *(_DWORD *)(this + 1132) );
    }
  }
  sub_100DF330((float *)this);
}
