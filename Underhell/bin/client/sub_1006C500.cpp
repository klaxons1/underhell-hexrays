int __userpurge sub_1006C500@<eax>(
        double (__thiscall ***a1)(_DWORD, int, int *, int, int, int, float *)@<ecx>,
        int a2@<ebx>,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        float a16,
        float a17)
{
  int v17; // edi
  int v18; // eax
  _DWORD *v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  double v24; // st7
  int v26; // eax
  float v27; // [esp+54h] [ebp-4Ch]
  char v28[12]; // [esp+60h] [ebp-40h] BYREF
  int v29[3]; // [esp+6Ch] [ebp-34h] BYREF
  int v30[3]; // [esp+78h] [ebp-28h] BYREF
  int v31[3]; // [esp+84h] [ebp-1Ch] BYREF
  int v32[3]; // [esp+90h] [ebp-10h] BYREF
  double (__thiscall ***v33)(_DWORD, int, int *, int, int, int, float *); // [esp+9Ch] [ebp-4h]
  int v34; // [esp+ACh] [ebp+Ch]

  v33 = a1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "C_SpriteRenderer::DrawSprite", 0, "Particle/Effect_Rendering", 0, 4);
  if ( !*(_DWORD *)(dword_104113F4 + 48)
    || !a4
    || (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, a4) != 2
    || (v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 40))(dword_10413178, a4)) == 0 )
  {
LABEL_26:
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
  v32[0] = *(int *)a5;
  v32[1] = *(int *)(a5 + 4);
  v32[2] = *(int *)(a5 + 8);
  if ( a8 )
  {
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a8 + 28))(a8);
    v19 = (_DWORD *)v18;
    if ( v18 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 164))(v18) )
      {
        v20 = (*(int (__thiscall **)(_DWORD *))(*v19 + 164))(v19);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 724))(v20) )
        {
          if ( (*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*v19 + 764))(v19) )
            {
              v21 = (*(int (__thiscall **)(_DWORD *))(*v19 + 764))(v19);
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 504))(v21) )
              {
                v22 = (*(int (__thiscall **)(_DWORD *))(*v19 + 764))(v19);
                if ( v22 )
                {
                  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 788))(v22) )
                    goto LABEL_26;
                }
              }
            }
          }
        }
      }
      if ( sub_10142330() == 3 )
      {
        v23 = (*(int (__thiscall **)(_DWORD *))(*v19 + 344))(v19);
        if ( v23 == 11 || v23 == 10 )
          goto LABEL_26;
      }
      (*(void (__thiscall **)(_DWORD *, int, int *, char *))(v19[1] + 148))(v19 + 1, a9, v32, v28);
    }
  }
  if ( !a10 )
    goto LABEL_25;
  v24 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)dword_10413168 + 20))(dword_10413168, a2);
  *(float *)&v34 = v24;
  if ( a10 == 3 || a10 == 9 )
  {
    v24 = (**v33)(v33, v17, v32, a10, a11, a12, &a16) * *(float *)&v34;
    *(float *)&v34 = v24;
    a13 = (int)((double)a13 * v24);
    a14 = (int)((double)a14 * v24);
    a15 = (int)((double)a15 * v24);
  }
  v27 = v24;
  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(LODWORD(v27));
  if ( *(float *)&v34 <= 0.0 )
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
  else
  {
LABEL_25:
    v26 = sub_1021F0F0(v17);
    sub_1006BBA0(v26, (float *)a5, a6, (float *)v29, (float *)v30, (float *)v31);
    sub_1006C050(
      a12,
      v17,
      a10,
      a3,
      v17,
      (float *)v32,
      a16,
      a7,
      *(float *)&a10,
      a13,
      a14,
      a15,
      a12,
      (int)v29,
      (float *)v30,
      (float *)v31,
      a17);
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 1;
  }
}
