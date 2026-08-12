void __thiscall sub_10224430(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  const char *v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ebp
  int v17; // ebx
  float v18; // [esp+0h] [ebp-68h]
  float v19; // [esp+4h] [ebp-64h]
  float v20[19]; // [esp+1Ch] [ebp-4Ch] BYREF

  v8 = a2;
  v10 = sub_101F7960(*(_DWORD *)(a2 + 64));
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 204))(v10) )
  {
    v19 = *(float *)(this + 88) * 1024.0;
    v18 = 1024.0 * *(float *)(this + 84);
    sub_10220B80(v20, (float *)v8, 0, v18, v19, *(_DWORD *)(v8 + 8));
    v14 = a7;
    v15 = sub_10227A90(a4, 0, &a2, a3 + 8);
    v16 = a8;
    v17 = v15;
    if ( a8 > 0 )
    {
      do
      {
        sub_10223E40((_BYTE *)this, a5, (int)v20, v14++, v17);
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
    v11 = *(_DWORD *)(this + 96);
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          sub_10223DA0(this, v8, a3, a4, a5, a6, a7, a8);
      }
      else
      {
        sub_102239F0((float *)this, v8, a3, a4, a5, a6, a7, a8);
      }
    }
    else
    {
      v13 = (const char *)sub_101F7950(*(char **)(v8 + 64));
      Warning(
        "C_OP_RenderSprites::RenderUnsorted: Attempting to use an unimplemented sprite renderer for system \"%s\"!\n",
        v13);
    }
  }
}
