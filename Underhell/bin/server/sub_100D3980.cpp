char __thiscall sub_100D3980(_WORD *this, int a2)
{
  int v2; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  float *v7; // edi
  int *v8; // ecx
  float v10; // [esp+4h] [ebp-18h]
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  this[572] = 0;
  sub_100EC3F0(0, 0.0, 0);
  (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 944))(this, 173);
  v12 = 0.0;
  if ( *((_DWORD *)this + 290) == 173 )
  {
    sub_100D18C0((int)this);
    v12 = 0.0;
  }
  v4 = *((_DWORD *)this + 280);
  if ( v4 != -1 && off_1061BE18[4 * (*((_DWORD *)this + 280) & 0xFFF) + 2] == v4 >> 12 )
  {
    v5 = off_1061BE18[4 * (*((_DWORD *)this + 280) & 0xFFF) + 1];
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
      if ( v6 )
      {
        v7 = (float *)(v6 + 1672);
        v11 = *(float *)(dword_106B31C8 + 12) + v12;
        if ( *(_DWORD *)(v6 + 1672) != LODWORD(v11) )
        {
          if ( *(_BYTE *)(v6 + 84) )
          {
            *(_BYTE *)(v6 + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(v6 + 24);
            if ( v8 )
              sub_100194B0(v8, 1672);
          }
          *v7 = v11;
        }
      }
    }
  }
  if ( 0.0 == v12 )
  {
    (*(void (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)this + 1004))(this, 0);
  }
  else
  {
    v10 = v12 + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((int)sub_100D1250, v10, (int)"BaseCombatWeapon_HideThink");
  }
  if ( 0.0 != *((float *)this + 318) && *((float *)this + 318) > (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( *((_BYTE *)this + 1264) )
      (*(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 924))(this);
    if ( *((_BYTE *)this + 1265) )
      (*(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 936))(this);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  return 1;
}
