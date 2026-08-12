void __thiscall sub_10387600(int this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int *v6; // ecx
  int v7; // eax
  int v8; // edi
  int *v9; // ecx
  int v10; // eax
  _BYTE *v11; // ecx
  int v12; // edi
  int *v13; // ecx
  int v14; // eax
  _BYTE *v15; // ecx
  int *v16; // ecx
  int v17; // [esp+4h] [ebp-10h]
  int v18; // [esp+4h] [ebp-10h]

  sub_10387340(this);
  if ( a2 == 2 )
  {
    v10 = *(_DWORD *)(this + 3860);
    if ( v10 )
    {
      v11 = (_BYTE *)(v10 + 116);
      v17 = HIBYTE(*(_DWORD *)(v10 + 116));
      if ( *(_BYTE *)(this + 3895) )
        sub_1005C620(v11, 0, 255, 0, v17);
      else
        sub_1005C620(v11, 255, 0, 0, v17);
      sub_102428B0(*(_DWORD *)(this + 3860), 0.25, 0.5);
      sub_10242820(*(_DWORD *)(this + 3860), 164, 0.1);
      v12 = *(_DWORD *)(this + 3860);
      if ( *(_BYTE *)(v12 + 112) )
      {
        if ( *(_BYTE *)(v12 + 84) )
        {
          *(_BYTE *)(v12 + 88) |= 1u;
        }
        else
        {
          v13 = *(int **)(v12 + 24);
          if ( v13 )
            sub_100194B0(v13, 112);
        }
        *(_BYTE *)(v12 + 112) = 0;
      }
    }
    v14 = *(_DWORD *)(this + 3864);
    if ( v14 )
    {
      v15 = (_BYTE *)(v14 + 116);
      v18 = HIBYTE(*(_DWORD *)(v14 + 116));
      if ( *(_BYTE *)(this + 3895) )
        sub_1005C620(v15, 0, 255, 0, v18);
      else
        sub_1005C620(v15, 255, 0, 0, v18);
      sub_102428B0(*(_DWORD *)(this + 3864), 0.25, 0.5);
      sub_10242820(*(_DWORD *)(this + 3864), 164, 0.1);
      v3 = *(_DWORD *)(this + 3864);
LABEL_35:
      if ( *(_BYTE *)(v3 + 112) )
      {
        if ( *(_BYTE *)(v3 + 84) )
        {
          *(_BYTE *)(v3 + 88) |= 1u;
          *(_BYTE *)(v3 + 112) = 0;
        }
        else
        {
          v16 = *(int **)(v3 + 24);
          if ( v16 )
            sub_100194B0(v16, 112);
          *(_BYTE *)(v3 + 112) = 0;
        }
      }
    }
  }
  else
  {
    if ( a2 != 3 )
    {
      v3 = *(_DWORD *)(this + 3860);
      if ( !v3 )
        return;
      goto LABEL_35;
    }
    v4 = *(_DWORD *)(this + 3860);
    if ( v4 )
    {
      sub_1005C620((_BYTE *)(v4 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v4 + 116)));
      sub_102428B0(*(_DWORD *)(this + 3860), 0.15000001, 0.1);
      sub_10242820(*(_DWORD *)(this + 3860), 164, 0.1);
      v5 = *(_DWORD *)(this + 3860);
      if ( *(_BYTE *)(v5 + 112) != 10 )
      {
        if ( *(_BYTE *)(v5 + 84) )
        {
          *(_BYTE *)(v5 + 88) |= 1u;
        }
        else
        {
          v6 = *(int **)(v5 + 24);
          if ( v6 )
            sub_100194B0(v6, 112);
        }
        *(_BYTE *)(v5 + 112) = 10;
      }
    }
    v7 = *(_DWORD *)(this + 3864);
    if ( v7 )
    {
      sub_1005C620((_BYTE *)(v7 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v7 + 116)));
      sub_102428B0(*(_DWORD *)(this + 3864), 0.15000001, 0.1);
      sub_10242820(*(_DWORD *)(this + 3864), 164, 0.1);
      v8 = *(_DWORD *)(this + 3864);
      if ( *(_BYTE *)(v8 + 112) != 10 )
      {
        if ( *(_BYTE *)(v8 + 84) )
        {
          *(_BYTE *)(v8 + 88) |= 1u;
        }
        else
        {
          v9 = *(int **)(v8 + 24);
          if ( v9 )
            sub_100194B0(v9, 112);
        }
        *(_BYTE *)(v8 + 112) = 10;
      }
    }
    sub_1023C380((_DWORD *)this, (int)"NPC_Manhack.Stunned", 0.0, 0);
  }
}
