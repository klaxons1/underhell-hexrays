char __thiscall sub_10112120(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v10; // [esp-10h] [ebp-2Ch]
  float v11; // [esp+4h] [ebp-18h] BYREF
  float v12; // [esp+8h] [ebp-14h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+10h] [ebp-Ch] BYREF
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]

  v2 = this[1];
  if ( (*(_DWORD *)(v2 + 252) & 0x8000) != 0 )
  {
    *(_DWORD *)(v2 + 252) &= ~0x8000u;
    if ( *(_DWORD *)(this[1] + 24) )
    {
      if ( *((_WORD *)this + 19) == 0xFFFF )
      {
        v3 = *(_DWORD *)dword_106B31EC;
        v4 = (*(int (__thiscall **)(_DWORD *))*this)(this);
        *((_WORD *)this + 19) = (*(int (__thiscall **)(int, int))(v3 + 4))(dword_106B31EC, v4);
        sub_10112060((int)this);
      }
      if ( *((_BYTE *)this + 41) && (this[9] & 4) == 0
        || (LOBYTE(v2) = *((_BYTE *)this + 36) >> 3, (this[9] & 8) != 0)
        || (*(_DWORD *)(this[1] + 252) & 0x40000) != 0 )
      {
        if ( 0.0 == *((float *)this + 8) )
        {
          v5 = *((unsigned __int16 *)this + 19);
          v6 = *(_DWORD *)dword_106B31EC;
          v7 = (*(int (__thiscall **)(_DWORD *))(*this + 32))(this);
          v8 = (*(int (__thiscall **)(_DWORD *, int))(*this + 32))(this, v7);
          LOBYTE(v2) = (*(int (__thiscall **)(int, int, int))(v6 + 28))(dword_106B31EC, v5, v8);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, float *, float *))(*this + 60))(this, &v11, &v14);
          v11 = v11 - 1.0;
          v10 = *((unsigned __int16 *)this + 19);
          v12 = v12 - 1.0;
          v13 = v13 - 1.0;
          v14 = v14 + 1.0;
          v15 = v15 + 1.0;
          v16 = v16 + 1.0;
          LOBYTE(v2) = (*(int (__thiscall **)(int, int, float *, float *))(*(_DWORD *)dword_106B31EC + 28))(
                         dword_106B31EC,
                         v10,
                         &v11,
                         &v14);
        }
      }
    }
  }
  return v2;
}
