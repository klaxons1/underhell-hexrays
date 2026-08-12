int __thiscall sub_1008F150(float *this)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // [esp-Ch] [ebp-28h]
  float v10; // [esp+4h] [ebp-18h] BYREF
  float v11; // [esp+8h] [ebp-14h]
  float v12; // [esp+Ch] [ebp-10h]
  float v13; // [esp+10h] [ebp-Ch] BYREF
  float v14; // [esp+14h] [ebp-8h]
  float v15; // [esp+18h] [ebp-4h]

  result = *((_DWORD *)this + 1);
  if ( (*(_DWORD *)(result + 312) & 0x8000) != 0 )
  {
    *(_DWORD *)(result + 312) &= ~0x8000u;
    if ( *((_WORD *)this + 19) != 0xFFFF )
    {
      if ( *((_BYTE *)this + 41) && ((_BYTE)this[9] & 4) == 0
        || ((_BYTE)this[9] & 8) != 0
        || (v3 = *((_DWORD *)this + 1), result = *(_DWORD *)(v3 + 312) >> 18, (*(_DWORD *)(v3 + 312) & 0x40000) != 0) )
      {
        v4 = *(_DWORD *)this;
        if ( 0.0 == this[8] )
        {
          v5 = *((unsigned __int16 *)this + 19);
          v6 = *(_DWORD *)dword_10413184;
          v7 = (*(int (__thiscall **)(float *))(v4 + 32))(this);
          v8 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 32))(this, v7);
          return (*(int (__thiscall **)(int, int, int))(v6 + 28))(dword_10413184, v5, v8);
        }
        else
        {
          (*(void (__thiscall **)(float *, float *, float *))(v4 + 60))(this, &v10, &v13);
          v10 = v10 - 1.0;
          v9 = *((unsigned __int16 *)this + 19);
          v11 = v11 - 1.0;
          v12 = v12 - 1.0;
          v13 = v13 + 1.0;
          v14 = v14 + 1.0;
          v15 = v15 + 1.0;
          return (*(int (__thiscall **)(int, int, float *, float *))(*(_DWORD *)dword_10413184 + 28))(
                   dword_10413184,
                   v9,
                   &v10,
                   &v13);
        }
      }
    }
  }
  return result;
}
