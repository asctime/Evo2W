
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */

#include <e-shell.h>
#include "e-shell-enumtypes.h"

/* enumerations from "../../shell/e-shell.h" */
GType
e_shell_quit_reason_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { E_SHELL_QUIT_ACTION, "E_SHELL_QUIT_ACTION", "E_SHELL_QUIT_ACTION" },
      { E_SHELL_QUIT_LAST_WINDOW, "E_SHELL_QUIT_LAST_WINDOW", "E_SHELL_QUIT_LAST_WINDOW" },
      { E_SHELL_QUIT_OPTION, "E_SHELL_QUIT_OPTION", "E_SHELL_QUIT_OPTION" },
      { E_SHELL_QUIT_REMOTE_REQUEST, "E_SHELL_QUIT_REMOTE_REQUEST", "E_SHELL_QUIT_REMOTE_REQUEST" },
      { E_SHELL_QUIT_SESSION_REQUEST, "E_SHELL_QUIT_SESSION_REQUEST", "E_SHELL_QUIT_SESSION_REQUEST" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("EShellQuitReason", values);
  }
  return etype;
}

/* Generated data ends here */
