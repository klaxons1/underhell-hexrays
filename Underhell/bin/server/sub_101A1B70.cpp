void __thiscall sub_101A1B70(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  int *v6; // ecx
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // edi
  int *v10; // ecx
  int v11; // [esp+14h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 5008) )
  {
    v3 = *(_DWORD *)(this + 2324) - 1;
    *(float *)(this + 5016) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 5008) = 0;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          v11 = 3;
          sub_10031670((_DWORD *)(this + 848), &v11);
        }
      }
      else
      {
        v11 = 2;
        sub_10031670((_DWORD *)(this + 848), &v11);
      }
    }
    else
    {
      v11 = 1;
      sub_10031670((_DWORD *)(this + 848), &v11);
    }
    sub_1023C380((int)"NPC_ACE.Cloak", 0.0, 0);
    sub_101AB3B0((int)"electrical_arc_01_system", 4, this, "hips", 0);
    v5 = *(_DWORD *)(this + 192) & 0xFFFFFFEF;
    if ( *(_DWORD *)(this + 192) != v5 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 192);
      }
      *(_DWORD *)(this + 192) = v5;
    }
    v7 = sub_100CF460((_DWORD *)this);
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_DWORD *)(v7 + 192) & 0xFFFFFFDF;
      if ( *(_DWORD *)(v7 + 192) != v9 )
      {
        if ( *(_BYTE *)(v7 + 84) )
        {
          *(_BYTE *)(v7 + 88) |= 1u;
        }
        else
        {
          v10 = *(int **)(v7 + 24);
          if ( v10 )
            sub_100194B0(v10, 192);
        }
        *(_DWORD *)(v8 + 192) = v9;
      }
      if ( *(_DWORD *)(v8 + 24) )
        **(_DWORD **)(v8 + 24) |= 0x80u;
      sub_100D8500((_DWORD *)v8);
    }
  }
}
