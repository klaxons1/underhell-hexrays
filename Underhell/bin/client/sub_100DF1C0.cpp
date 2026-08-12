void __thiscall sub_100DF1C0(int this)
{
  int v2; // edi
  int v3; // eax
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st6
  _BYTE *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edi

  v2 = *(_DWORD *)(this + 17300);
  v3 = *(_DWORD *)v2;
  if ( *(int *)v2 >= 0 )
  {
    if ( v3 <= 1 )
    {
      v5 = *(float *)(v2 + 28) + *(float *)(v2 + 20);
      *(float *)(this + 17364) = v5;
      if ( *(float *)(v2 + 20) <= (double)*(float *)(this + 17304) )
      {
        v7 = v5;
        v6 = 0.0;
        if ( v7 >= *(float *)(this + 17304) )
        {
          *(_DWORD *)(this + 17356) = 0;
        }
        else
        {
          v6 = 0.0;
          if ( *(float *)(v2 + 24) <= 0.0 )
            *(_DWORD *)(this + 17356) = 255;
          else
            *(_DWORD *)(this + 17356) = (int)((*(float *)(this + 17304) - v7) / *(float *)(v2 + 24) * 255.0);
        }
      }
      else
      {
        v6 = 0.0;
        *(_DWORD *)(this + 17356) = (int)((*(float *)(v2 + 20) - *(float *)(this + 17304))
                                        * (1.0
                                         / *(float *)(v2 + 20))
                                        * 255.0);
      }
      *(float *)(this + 17360) = v6;
      if ( *(_DWORD *)v2 == 1 && sub_10115FB0() % 100 < 10 )
        *(float *)(this + 17360) = 1.0;
    }
    else if ( v3 == 2 )
    {
      v4 = (double)*(int *)(this + 17336) * *(float *)(v2 + 20) + *(float *)(v2 + 28);
      *(float *)(this + 17364) = v4;
      if ( v4 >= *(float *)(this + 17304) || *(float *)(v2 + 24) <= 0.0 )
        *(_DWORD *)(this + 17356) = 0;
      else
        *(_DWORD *)(this + 17356) = (int)((*(float *)(this + 17304) - v4) / *(float *)(v2 + 24) * 255.0);
    }
  }
  v8 = *(_BYTE **)(this + 17368);
  *(_DWORD *)(this + 17372) = dword_1042FAD8;
  if ( v8 && *v8 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA7C + 16))(dword_1047CA7C);
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v9);
    if ( v10 )
    {
      v11 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v10 + 12))(v10, v8, 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_104345FC + 16))(dword_104345FC, v11);
      *(_DWORD *)(this + 17372) = v11;
    }
  }
}
