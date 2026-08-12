void __thiscall sub_101E8E60(float *this)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  char v5; // al
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  v2 = *((_DWORD *)this + 922);
  if ( *((_BYTE *)this + 2329) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1492))(this);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC)
      && this[917] <= (double)*(float *)(dword_106B31C8 + 12)
      && this[917] > 0.0 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = LODWORD(this[v2 + 918]);
        if ( v4 )
          break;
        if ( ++v2 == 4 )
          v2 = 0;
        if ( ++v3 >= 4 )
        {
          this[917] = 0.0;
          return;
        }
      }
      this[v2 + 918] = 0.0;
      if ( v4 <= 0 )
      {
        sub_10239250(*((_DWORD *)this + 6), -v4);
      }
      else
      {
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 128))(dword_106B31D0, v4);
        sub_10429A00(Buffer, 0x200u, "!%s", v5);
        sub_1023A420(*((_DWORD *)this + 6), Buffer);
      }
      this[917] = *(float *)(dword_106B31C8 + 12) + 3.5;
    }
  }
}
