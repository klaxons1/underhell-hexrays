void __thiscall sub_10306B20(int this, int a2, char a3, int a4)
{
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  float *v10; // edi
  int v11; // ecx
  int v12; // edx
  double v13; // st6
  double v14; // st7
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  float v18; // [esp+8h] [ebp-B4h]
  _DWORD v19[20]; // [esp+24h] [ebp-98h] BYREF
  _BYTE v20[12]; // [esp+74h] [ebp-48h] BYREF
  float v21[3]; // [esp+80h] [ebp-3Ch] BYREF
  int v22; // [esp+8Ch] [ebp-30h] BYREF
  float v23; // [esp+90h] [ebp-2Ch]
  float v24; // [esp+94h] [ebp-28h]
  float v25; // [esp+98h] [ebp-24h] BYREF
  float v26; // [esp+9Ch] [ebp-20h]
  float v27; // [esp+A0h] [ebp-1Ch]
  float v28; // [esp+A4h] [ebp-18h] BYREF
  float v29; // [esp+A8h] [ebp-14h]
  float v30; // [esp+ACh] [ebp-10h]
  float v31; // [esp+B0h] [ebp-Ch]
  float v32; // [esp+B4h] [ebp-8h]
  float v33; // [esp+B8h] [ebp-4h]
  int savedregs; // [esp+BCh] [ebp+0h] BYREF

  if ( (*(_BYTE *)(this + 192) & 0x20) == 0 )
  {
    sub_103062E0((void *)this);
    sub_100EAB80((_DWORD *)this, 32);
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    v5 = *(_DWORD *)(this + 1120);
    if ( v5 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1] )
    {
      sub_103064C0((_DWORD *)this);
      v6 = *(_DWORD *)(this + 1120);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 140))(v7, 0, -1);
    }
    sub_1023C380((_DWORD *)this, (int)"NPC_Antlion_Grub.Die", 0.0, 0);
    sub_1023C380((_DWORD *)this, (int)"NPC_Antlion_Grub.Squish", 0.0, 0);
    if ( a2 && (*(char **)(a2 + 92) == "npc_vortigaunt" || sub_100D6240((_DWORD *)a2, "npc_vortigaunt")) )
      sub_103C7940(this);
    v8 = *(_DWORD *)(this + 252) >> 11;
    *(_DWORD *)(this + 196) = 0;
    if ( (v8 & 1) != 0 )
      sub_100DAE60(this);
    sub_104222B0(this + 704, &v25, 0, v20);
    v9 = *(_DWORD *)(this + 252) >> 11;
    v31 = v25 * 14.0;
    v32 = v26 * 14.0;
    v33 = 14.0 * v27;
    if ( (v9 & 1) != 0 )
      sub_100DAE60(this);
    v10 = (float *)(this + 580);
    v11 = *(_DWORD *)(this + 252) >> 11;
    v28 = v31 + *(float *)(this + 580);
    v29 = *(float *)(this + 584) + v32;
    v30 = *(float *)(this + 588) + v33;
    if ( (v11 & 1) != 0 )
      sub_100DAE60(this);
    sub_101AB000(
      "GrubSquashBlood",
      v28,
      v29,
      v30,
      *(float *)(this + 704),
      *(float *)(this + 708),
      *(float *)(this + 712),
      0);
    v12 = *(_DWORD *)(this + 252) >> 11;
    v31 = v25 * 16.0;
    v32 = v26 * 16.0;
    v33 = 16.0 * v27;
    if ( (v12 & 1) != 0 )
      sub_100DAE60(this);
    v13 = *(float *)(this + 584) - v32;
    v14 = *(float *)(this + 588) - v33;
    v28 = *v10 - v31;
    v29 = v13;
    v30 = v14;
    v21[0] = -v25;
    v21[1] = -v26;
    v21[2] = -v27;
    sub_10422540(v21, &v22);
    sub_101AB000("GrubSquashBlood", v28, v29, v30, *(float *)&v22, v23, v24, 0);
    v15 = *(_DWORD *)(this + 252) >> 11;
    v31 = v25 * 32.0;
    v32 = v26 * 32.0;
    v33 = 32.0 * v27;
    if ( (v15 & 1) != 0 )
      sub_100DAE60(this);
    v28 = v31 + *v10;
    v29 = *(float *)(this + 584) + v32;
    v30 = *(float *)(this + 588) + v33;
    sub_10306950(this, (int)&savedregs, (int)v10, this, &v28);
    v16 = *(_DWORD *)(this + 252) >> 11;
    v31 = v25 * 32.0;
    v32 = v26 * 32.0;
    v33 = 32.0 * v27;
    if ( (v16 & 1) != 0 )
      sub_100DAE60(this);
    v28 = *v10 - v31;
    v29 = *(float *)(this + 584) - v32;
    v30 = *(float *)(this + 588) - v33;
    sub_10306950(this, (int)&savedregs, (int)v10, this, &v28);
    if ( a3 )
    {
      v17 = *(_DWORD *)(this + 220);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      *(float *)&v22 = 0.0;
      v23 = 0.0;
      v24 = -1.0;
      v18 = (float)(v17 + 1);
      sub_102487B0((int)v19, a2, a2, (float *)&v22, (float *)(this + 580), v18, 1, 0, 0);
      sub_100D9E70((int *)this, this, v19);
    }
  }
}
