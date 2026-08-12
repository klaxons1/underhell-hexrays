char __userpurge sub_10148860@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3,
        int (__thiscall ***a4)(_DWORD, int),
        const void *a5)
{
  int v6; // edi
  const char *v7; // eax
  _DWORD *v8; // eax
  volatile signed __int32 *v9; // esi
  int v10; // ecx
  char Buffer[128]; // [esp+8h] [ebp-84h] BYREF
  int v13; // [esp+88h] [ebp-4h]

  v13 = a1;
  if ( (dword_1043C8D0 & 1) == 0 )
  {
    dword_1043C8D0 |= 1u;
    dword_1043C8CC = CVProfile::FindOrCreateCounter(g_VProfCurrentProfile, "shadow depth textures rendered", 0);
    atexit(nullsub_6);
  }
  ++*(_DWORD *)dword_1043C8CC;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  v7 = (const char *)(**a4)(a4, a2);
  sprintf(Buffer, "UpdateShadowDepthTexture (%s)", v7);
  v8 = (_DWORD *)sub_100DDA40(164);
  if ( v8 )
    v9 = sub_101441E0(v8, a1);
  else
    v9 = 0;
  sub_10145000(v9, a5);
  v10 = v13;
  *((_DWORD *)v9 + 39) = a3;
  *((_DWORD *)v9 + 40) = a4;
  (**(void (__thiscall ***)(int, volatile signed __int32 *))(v10 + 556))(v10 + 556, v9);
  if ( !_InterlockedDecrement(v9 + 1) && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v9 + 4))(v9) )
    (**(void (__thiscall ***)(volatile signed __int32 *, int))v9)(v9, 1);
  if ( v6 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
  }
  return 1;
}
