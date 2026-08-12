bool __thiscall sub_101CD810(char *this, int a2, int a3, int a4)
{
  int v4; // esi
  void (__thiscall *v5)(int); // edx
  char *v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  bool v10; // cc
  _DWORD *v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  _BYTE v20[44]; // [esp+Ch] [ebp-74h] BYREF
  float v21; // [esp+38h] [ebp-48h]
  float v22; // [esp+44h] [ebp-3Ch]
  int v23; // [esp+48h] [ebp-38h]
  int v24; // [esp+4Ch] [ebp-34h]
  int v25; // [esp+50h] [ebp-30h]
  __int16 v26; // [esp+54h] [ebp-2Ch]
  int v27; // [esp+58h] [ebp-28h]
  int v28; // [esp+5Ch] [ebp-24h]
  _BYTE v29[12]; // [esp+60h] [ebp-20h] BYREF
  _BYTE v30[12]; // [esp+6Ch] [ebp-14h] BYREF
  char *v31; // [esp+78h] [ebp-8h]
  int v32; // [esp+7Ch] [ebp-4h]

  v4 = dword_10700AC8;
  v5 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v6 = this;
  v31 = this;
  v5(dword_10700AC8);
  if ( !*((_DWORD *)v6 + 275) && sub_100D7240(v6) )
    sub_100BD750((volatile signed __int32 *)v6);
  v7 = (_DWORD *)*((_DWORD *)v6 + 275);
  if ( v7 && *v7 )
    v8 = *((_DWORD *)v6 + 275);
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  if ( !v8 )
    return 0;
  v10 = *((_DWORD *)v6 + 283) <= 0;
  v32 = 0;
  if ( !v10 )
  {
    v11 = v6 + 1156;
    do
    {
      if ( *v11 )
      {
        (*(void (__thiscall **)(_DWORD, _BYTE *, _BYTE *))(*(_DWORD *)*v11 + 188))(*v11, v29, v30);
        v12 = *(_DWORD *)dword_106BAFF0;
        v13 = (*(int (__thiscall **)(_DWORD, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)*v11 + 292))(*v11, v29, v30, v20);
        (*(void (__thiscall **)(int, int, int))(v12 + 128))(dword_106BAFF0, a2, v13);
        if ( *(float *)(a4 + 44) > (double)v21 )
        {
          v14 = *v11;
          v26 = v32;
          LOWORD(v24) = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 152))(v14);
          sub_10079DC0((float *)a4, (int)v20);
          v15 = v23;
          *(float *)(a4 + 56) = v22;
          v16 = v24;
          v17 = v25;
          *(_DWORD *)(a4 + 60) = v15;
          LOWORD(v15) = v26;
          *(_DWORD *)(a4 + 64) = v16;
          v18 = v27;
          *(_DWORD *)(a4 + 68) = v17;
          v19 = v28;
          *(_WORD *)(a4 + 72) = v15;
          *(_DWORD *)(a4 + 76) = v18;
          *(_DWORD *)(a4 + 80) = v19;
        }
        v6 = v31;
      }
      else
      {
        DevWarning("Bogus object in Ragdoll Prop's ragdoll list!\n");
      }
      v11 += 6;
      ++v32;
    }
    while ( v32 < *((_DWORD *)v6 + 283) );
  }
  return *(float *)(a4 + 44) < 1.0;
}
