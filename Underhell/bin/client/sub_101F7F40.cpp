void __thiscall sub_101F7F40(int this, int a2, int a3, int a4)
{
  int v5; // ebx
  bool v6; // of
  int i; // edi
  int v8; // ecx
  float *v9; // eax
  int v10; // edx
  float *v11; // eax
  int v12; // edx
  float *v13; // eax
  int v14; // edx
  float *v15; // eax
  int v16; // edx
  float *v17; // eax
  int v18; // edx
  float *v19; // eax
  int v20; // edx
  float *v21; // eax
  int v22; // edx
  float *v23; // eax
  int v24; // [esp+8h] [ebp+4h]

  if ( a4 )
  {
    v5 = a2;
    v6 = __OFSUB__(a2, a2 + a3);
    v24 = a2 + a3;
    if ( -a3 < 0 != v6 )
    {
      do
      {
        for ( i = 0; i < 32; i += 8 )
        {
          if ( ((1 << i) & a4) != 0 )
          {
            v8 = *(_DWORD *)(this + 4 * i + 6068) + 4 * ((v5 & 3) + *(_DWORD *)(this + 4 * i + 6324) * (v5 / 4));
            if ( i == 11 )
            {
              *(_DWORD *)v8 = (*(_DWORD *)(this + 6616) + *(_DWORD *)(this + 6624)) & 0xFFF;
              ++*(_DWORD *)(this + 6616);
            }
            else if ( i == 8 )
            {
              *(float *)v8 = *(float *)(this + 36);
            }
            else
            {
              v9 = (float *)(*(_DWORD *)(this + 6580) + 48 * i);
              *(float *)v8 = *v9;
              if ( *(_DWORD *)(this + 4 * i + 6324) == 12 )
              {
                *(float *)(v8 + 16) = v9[4];
                *(float *)(v8 + 32) = v9[8];
              }
            }
          }
          if ( ((1 << (i + 1)) & a4) != 0 )
          {
            v10 = *(_DWORD *)(this + 4 * i + 6072) + 4 * ((v5 & 3) + *(_DWORD *)(this + 4 * i + 6328) * (v5 / 4));
            if ( i == 10 )
            {
              *(_DWORD *)v10 = (*(_DWORD *)(this + 6616) + *(_DWORD *)(this + 6624)) & 0xFFF;
              ++*(_DWORD *)(this + 6616);
            }
            else if ( i == 7 )
            {
              *(float *)v10 = *(float *)(this + 36);
            }
            else
            {
              v11 = (float *)(*(_DWORD *)(this + 6580) + 16 * (3 * i + 3));
              *(float *)v10 = *v11;
              if ( *(_DWORD *)(this + 4 * i + 6328) == 12 )
              {
                *(float *)(v10 + 16) = v11[4];
                *(float *)(v10 + 32) = v11[8];
              }
            }
          }
          if ( ((1 << (i + 2)) & a4) != 0 )
          {
            v12 = *(_DWORD *)(this + 4 * i + 6076) + 4 * ((v5 & 3) + *(_DWORD *)(this + 4 * i + 6332) * (v5 / 4));
            if ( i == 9 )
            {
              *(_DWORD *)v12 = (*(_DWORD *)(this + 6616) + *(_DWORD *)(this + 6624)) & 0xFFF;
              ++*(_DWORD *)(this + 6616);
            }
            else if ( i == 6 )
            {
              *(float *)v12 = *(float *)(this + 36);
            }
            else
            {
              v13 = (float *)(*(_DWORD *)(this + 6580) + 48 * (i + 2));
              *(float *)v12 = *v13;
              if ( *(_DWORD *)(this + 4 * i + 6332) == 12 )
              {
                *(float *)(v12 + 16) = v13[4];
                *(float *)(v12 + 32) = v13[8];
              }
            }
          }
          if ( ((1 << (i + 3)) & a4) != 0 )
          {
            v14 = *(_DWORD *)(this + 4 * i + 6080) + 4 * ((v5 & 3) + *(_DWORD *)(this + 4 * i + 6336) * (v5 / 4));
            if ( i == 8 )
            {
              *(_DWORD *)v14 = (*(_DWORD *)(this + 6616) + *(_DWORD *)(this + 6624)) & 0xFFF;
              ++*(_DWORD *)(this + 6616);
            }
            else if ( i == 5 )
            {
              *(float *)v14 = *(float *)(this + 36);
            }
            else
            {
              v15 = (float *)(*(_DWORD *)(this + 6580) + 48 * (i + 3));
              *(float *)v14 = *v15;
              if ( *(_DWORD *)(this + 4 * i + 6336) == 12 )
              {
                *(float *)(v14 + 16) = v15[4];
                *(float *)(v14 + 32) = v15[8];
              }
            }
          }
          if ( ((1 << (i + 4)) & a4) != 0 )
          {
            v16 = *(_DWORD *)(this + 4 * i + 6084) + 4 * ((v5 & 3) + *(_DWORD *)(this + 4 * i + 6340) * (v5 / 4));
            if ( i == 7 )
            {
              *(_DWORD *)v16 = (*(_DWORD *)(this + 6616) + *(_DWORD *)(this + 6624)) & 0xFFF;
              ++*(_DWORD *)(this + 6616);
            }
            else if ( i == 4 )
            {
              *(float *)v16 = *(float *)(this + 36);
            }
            else
            {
              v17 = (float *)(*(_DWORD *)(this + 6580) + 48 * (i + 4));
              *(float *)v16 = *v17;
              if ( *(_DWORD *)(this + 4 * i + 6340) == 12 )
              {
                *(float *)(v16 + 16) = v17[4];
                *(float *)(v16 + 32) = v17[8];
              }
            }
          }
          if ( ((1 << (i + 5)) & a4) != 0 )
          {
            v18 = *(_DWORD *)(this + 4 * i + 6088) + 4 * ((v5 & 3) + *(_DWORD *)(this + 4 * i + 6344) * (v5 / 4));
            if ( i == 6 )
            {
              *(_DWORD *)v18 = (*(_DWORD *)(this + 6616) + *(_DWORD *)(this + 6624)) & 0xFFF;
              ++*(_DWORD *)(this + 6616);
            }
            else if ( i == 3 )
            {
              *(float *)v18 = *(float *)(this + 36);
            }
            else
            {
              v19 = (float *)(*(_DWORD *)(this + 6580) + 48 * (i + 5));
              *(float *)v18 = *v19;
              if ( *(_DWORD *)(this + 4 * i + 6344) == 12 )
              {
                *(float *)(v18 + 16) = v19[4];
                *(float *)(v18 + 32) = v19[8];
              }
            }
          }
          if ( ((1 << (i + 6)) & a4) != 0 )
          {
            v20 = *(_DWORD *)(this + 4 * i + 6092) + 4 * ((v5 & 3) + *(_DWORD *)(this + 4 * i + 6348) * (v5 / 4));
            if ( i == 5 )
            {
              *(_DWORD *)v20 = (*(_DWORD *)(this + 6616) + *(_DWORD *)(this + 6624)) & 0xFFF;
              ++*(_DWORD *)(this + 6616);
            }
            else if ( i == 2 )
            {
              *(float *)v20 = *(float *)(this + 36);
            }
            else
            {
              v21 = (float *)(*(_DWORD *)(this + 6580) + 48 * (i + 6));
              *(float *)v20 = *v21;
              if ( *(_DWORD *)(this + 4 * i + 6348) == 12 )
              {
                *(float *)(v20 + 16) = v21[4];
                *(float *)(v20 + 32) = v21[8];
              }
            }
          }
          if ( ((1 << (i + 7)) & a4) != 0 )
          {
            v22 = *(_DWORD *)(this + 4 * i + 6096) + 4 * ((v5 & 3) + *(_DWORD *)(this + 4 * i + 6352) * (v5 / 4));
            if ( i == 4 )
            {
              *(_DWORD *)v22 = (*(_DWORD *)(this + 6616) + *(_DWORD *)(this + 6624)) & 0xFFF;
              ++*(_DWORD *)(this + 6616);
            }
            else if ( i == 1 )
            {
              *(float *)v22 = *(float *)(this + 36);
            }
            else
            {
              v23 = (float *)(*(_DWORD *)(this + 6580) + 48 * (i + 7));
              *(float *)v22 = *v23;
              if ( *(_DWORD *)(this + 4 * i + 6352) == 12 )
              {
                *(float *)(v22 + 16) = v23[4];
                *(float *)(v22 + 32) = v23[8];
              }
            }
          }
        }
        ++v5;
      }
      while ( v5 < v24 );
    }
  }
}
