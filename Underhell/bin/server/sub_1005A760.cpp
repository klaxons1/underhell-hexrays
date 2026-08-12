void __thiscall sub_1005A760(int this, int *a2)
{
  void *v3; // eax
  int *v4; // ebx
  const char *v5; // eax
  const char *v6; // eax
  char v7; // al
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  int v11; // eax
  double v12; // st7
  int v13; // edx
  double v14; // [esp+0h] [ebp-54h]
  double v15; // [esp+8h] [ebp-4Ch]
  double v16; // [esp+8h] [ebp-4Ch]
  double v17; // [esp+10h] [ebp-44h]
  const char *v18; // [esp+24h] [ebp-30h] BYREF
  const char *v19; // [esp+28h] [ebp-2Ch]
  int v20; // [esp+2Ch] [ebp-28h]
  float v21; // [esp+30h] [ebp-24h]
  float v22; // [esp+34h] [ebp-20h]
  float v23; // [esp+38h] [ebp-1Ch]
  float v24; // [esp+3Ch] [ebp-18h]
  char v25; // [esp+40h] [ebp-14h]
  int v26; // [esp+44h] [ebp-10h]
  int v27; // [esp+48h] [ebp-Ch]
  int v28; // [esp+4Ch] [ebp-8h]
  char v29; // [esp+50h] [ebp-4h]
  char v30; // [esp+51h] [ebp-3h]
  char v31; // [esp+52h] [ebp-2h]
  char v32; // [esp+53h] [ebp-1h]

  sub_1006FA60(a2);
  v3 = (void *)sub_1004C590((_DWORD *)this, 0);
  if ( v3 && sub_10058900(v3, (int *)&a2) && (v4 = a2) != 0 )
  {
    if ( *(float *)(this + 864) * 4.0 < *(float *)(this + 868) )
    {
      v17 = *(float *)(this + 868);
      v15 = *(float *)(this + 864);
      v5 = (const char *)sub_100D6390(this);
      Warning(
        "ai_goal_lead '%s': lead distance (%.2f) * 4 is < retrieve distance (%.2f). This will make the NPC act stupid. Ei"
        "ther reduce the retrieve distance, or increase the lead distance.\n",
        v5,
        v15,
        v17);
    }
    if ( *(float *)(this + 864) + 24.0 > *(float *)(this + 868) )
    {
      v16 = *(float *)(this + 864);
      v14 = *(float *)(this + 868);
      v6 = (const char *)sub_100D6390(this);
      Warning(
        "ai_goal_lead '%s': retrieve distance (%.2f) < lead distance (%.2f) + %d. Retrieve distance should be at least %d"
        " greater than the lead distance, or NPC will ping-pong while retrieving.\n",
        v6,
        v14,
        v16,
        24,
        24);
      *(float *)(this + 868) = *(float *)(this + 864) + 24.0;
    }
    v18 = *(const char **)(this + 808);
    if ( !v18 )
      v18 = String;
    v19 = *(const char **)(this + 896);
    if ( !v19 )
      v19 = String;
    v7 = *(_BYTE *)(this + 876);
    v8 = *(_DWORD *)(this + 880);
    v21 = *(float *)(this + 860);
    v9 = *(_DWORD *)(this + 248);
    v10 = *(float *)(this + 864);
    v25 = v7;
    v22 = v10;
    v11 = *(_DWORD *)(this + 888);
    v12 = *(float *)(this + 868);
    v26 = v8;
    v23 = v12;
    LOBYTE(v8) = *(_BYTE *)(this + 892);
    v24 = *(float *)(this + 872);
    v20 = v9;
    v13 = *(_DWORD *)(this + 884);
    v28 = v11;
    LOBYTE(v11) = *(_BYTE *)(this + 894);
    v27 = v13;
    LOBYTE(v13) = *(_BYTE *)(this + 893);
    v29 = v8;
    LOBYTE(v8) = *(_BYTE *)(this + 895);
    v31 = v11;
    v30 = v13;
    v32 = v8;
    sub_1005A6C0(v4, (int)&v18, this + 852);
  }
  else
  {
    DevMsg("Lead goal entity activated for an NPC that doesn't have the lead behavior\n");
  }
}
